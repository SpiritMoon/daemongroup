ASN_MODULE_SOURCES+=ANY.c
ASN_MODULE_SOURCES+=ENUMERATED.c
ASN_MODULE_SOURCES+=INTEGER.c
ASN_MODULE_SOURCES+=NativeEnumerated.c
ASN_MODULE_SOURCES+=NativeInteger.c
ASN_MODULE_SOURCES+=OBJECT_IDENTIFIER.c
ASN_MODULE_SOURCES+=asn_SEQUENCE_OF.c
ASN_MODULE_SOURCES+=asn_SET_OF.c
ASN_MODULE_SOURCES+=constr_CHOICE.c
ASN_MODULE_SOURCES+=constr_SEQUENCE.c
ASN_MODULE_SOURCES+=constr_SEQUENCE_OF.c
ASN_MODULE_SOURCES+=constr_SET_OF.c
ASN_MODULE_SOURCES+=OCTET_STRING.c
ASN_MODULE_SOURCES+=BIT_STRING.c
ASN_MODULE_SOURCES+=asn_codecs_prim.c
ASN_MODULE_SOURCES+=ber_tlv_length.c
ASN_MODULE_SOURCES+=ber_tlv_tag.c
ASN_MODULE_SOURCES+=ber_decoder.c
ASN_MODULE_SOURCES+=der_encoder.c
ASN_MODULE_SOURCES+=constr_TYPE.c
ASN_MODULE_SOURCES+=constraints.c
ASN_MODULE_SOURCES+=xer_support.c
ASN_MODULE_SOURCES+=xer_decoder.c
ASN_MODULE_SOURCES+=xer_encoder.c
ASN_MODULE_SOURCES+=per_support.c
ASN_MODULE_SOURCES+=per_decoder.c
ASN_MODULE_SOURCES+=per_encoder.c
ASN_MODULE_SOURCES+=per_opentype.c
ASN_MODULE_SOURCES+=BOOLEAN.c

# This file may be used as an input for make(3)
# Remove the lines below to convert it into a pure .am file
TARGET = libasn1c.so
CFLAGS += -I../inc
CFLAGS += -I/opt/mipslibs/usr/include
CC = mips-linux-gnu-gcc -Werror
OBJS=${ASN_MODULE_SOURCES:.c=.o}

all: $(TARGET)

$(TARGET): ${OBJS}
	$(CC) -shared -fPIC -o $(TARGET) ${OBJS}

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(TARGET)
	rm -f $(OBJS)
