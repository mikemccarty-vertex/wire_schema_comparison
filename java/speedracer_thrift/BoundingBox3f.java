/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.11.0)", date = "2018-01-23")
public class BoundingBox3f implements org.apache.thrift.TBase<BoundingBox3f, BoundingBox3f._Fields>, java.io.Serializable, Cloneable, Comparable<BoundingBox3f> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("BoundingBox3f");

  private static final org.apache.thrift.protocol.TField XMIN_FIELD_DESC = new org.apache.thrift.protocol.TField("xmin", org.apache.thrift.protocol.TType.DOUBLE, (short)1);
  private static final org.apache.thrift.protocol.TField XMAX_FIELD_DESC = new org.apache.thrift.protocol.TField("xmax", org.apache.thrift.protocol.TType.DOUBLE, (short)2);
  private static final org.apache.thrift.protocol.TField YMIN_FIELD_DESC = new org.apache.thrift.protocol.TField("ymin", org.apache.thrift.protocol.TType.DOUBLE, (short)3);
  private static final org.apache.thrift.protocol.TField YMAX_FIELD_DESC = new org.apache.thrift.protocol.TField("ymax", org.apache.thrift.protocol.TType.DOUBLE, (short)4);
  private static final org.apache.thrift.protocol.TField ZMIN_FIELD_DESC = new org.apache.thrift.protocol.TField("zmin", org.apache.thrift.protocol.TType.DOUBLE, (short)5);
  private static final org.apache.thrift.protocol.TField ZMAX_FIELD_DESC = new org.apache.thrift.protocol.TField("zmax", org.apache.thrift.protocol.TType.DOUBLE, (short)6);

  private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new BoundingBox3fStandardSchemeFactory();
  private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new BoundingBox3fTupleSchemeFactory();

  public double xmin; // required
  public double xmax; // required
  public double ymin; // required
  public double ymax; // required
  public double zmin; // required
  public double zmax; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    XMIN((short)1, "xmin"),
    XMAX((short)2, "xmax"),
    YMIN((short)3, "ymin"),
    YMAX((short)4, "ymax"),
    ZMIN((short)5, "zmin"),
    ZMAX((short)6, "zmax");

    private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

    static {
      for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // XMIN
          return XMIN;
        case 2: // XMAX
          return XMAX;
        case 3: // YMIN
          return YMIN;
        case 4: // YMAX
          return YMAX;
        case 5: // ZMIN
          return ZMIN;
        case 6: // ZMAX
          return ZMAX;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new java.lang.IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    public static _Fields findByName(java.lang.String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final java.lang.String _fieldName;

    _Fields(short thriftId, java.lang.String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public java.lang.String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  private static final int __XMIN_ISSET_ID = 0;
  private static final int __XMAX_ISSET_ID = 1;
  private static final int __YMIN_ISSET_ID = 2;
  private static final int __YMAX_ISSET_ID = 3;
  private static final int __ZMIN_ISSET_ID = 4;
  private static final int __ZMAX_ISSET_ID = 5;
  private byte __isset_bitfield = 0;
  public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.XMIN, new org.apache.thrift.meta_data.FieldMetaData("xmin", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    tmpMap.put(_Fields.XMAX, new org.apache.thrift.meta_data.FieldMetaData("xmax", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    tmpMap.put(_Fields.YMIN, new org.apache.thrift.meta_data.FieldMetaData("ymin", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    tmpMap.put(_Fields.YMAX, new org.apache.thrift.meta_data.FieldMetaData("ymax", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    tmpMap.put(_Fields.ZMIN, new org.apache.thrift.meta_data.FieldMetaData("zmin", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    tmpMap.put(_Fields.ZMAX, new org.apache.thrift.meta_data.FieldMetaData("zmax", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.DOUBLE)));
    metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(BoundingBox3f.class, metaDataMap);
  }

  public BoundingBox3f() {
    this.xmin = 1e+38;

    this.xmax = -1e+38;

    this.ymin = 1e+38;

    this.ymax = -1e+38;

    this.zmin = 1e+38;

    this.zmax = -1e+38;

  }

  public BoundingBox3f(
    double xmin,
    double xmax,
    double ymin,
    double ymax,
    double zmin,
    double zmax)
  {
    this();
    this.xmin = xmin;
    setXminIsSet(true);
    this.xmax = xmax;
    setXmaxIsSet(true);
    this.ymin = ymin;
    setYminIsSet(true);
    this.ymax = ymax;
    setYmaxIsSet(true);
    this.zmin = zmin;
    setZminIsSet(true);
    this.zmax = zmax;
    setZmaxIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public BoundingBox3f(BoundingBox3f other) {
    __isset_bitfield = other.__isset_bitfield;
    this.xmin = other.xmin;
    this.xmax = other.xmax;
    this.ymin = other.ymin;
    this.ymax = other.ymax;
    this.zmin = other.zmin;
    this.zmax = other.zmax;
  }

  public BoundingBox3f deepCopy() {
    return new BoundingBox3f(this);
  }

  @Override
  public void clear() {
    this.xmin = 1e+38;

    this.xmax = -1e+38;

    this.ymin = 1e+38;

    this.ymax = -1e+38;

    this.zmin = 1e+38;

    this.zmax = -1e+38;

  }

  public double getXmin() {
    return this.xmin;
  }

  public BoundingBox3f setXmin(double xmin) {
    this.xmin = xmin;
    setXminIsSet(true);
    return this;
  }

  public void unsetXmin() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __XMIN_ISSET_ID);
  }

  /** Returns true if field xmin is set (has been assigned a value) and false otherwise */
  public boolean isSetXmin() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __XMIN_ISSET_ID);
  }

  public void setXminIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __XMIN_ISSET_ID, value);
  }

  public double getXmax() {
    return this.xmax;
  }

  public BoundingBox3f setXmax(double xmax) {
    this.xmax = xmax;
    setXmaxIsSet(true);
    return this;
  }

  public void unsetXmax() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __XMAX_ISSET_ID);
  }

  /** Returns true if field xmax is set (has been assigned a value) and false otherwise */
  public boolean isSetXmax() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __XMAX_ISSET_ID);
  }

  public void setXmaxIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __XMAX_ISSET_ID, value);
  }

  public double getYmin() {
    return this.ymin;
  }

  public BoundingBox3f setYmin(double ymin) {
    this.ymin = ymin;
    setYminIsSet(true);
    return this;
  }

  public void unsetYmin() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __YMIN_ISSET_ID);
  }

  /** Returns true if field ymin is set (has been assigned a value) and false otherwise */
  public boolean isSetYmin() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __YMIN_ISSET_ID);
  }

  public void setYminIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __YMIN_ISSET_ID, value);
  }

  public double getYmax() {
    return this.ymax;
  }

  public BoundingBox3f setYmax(double ymax) {
    this.ymax = ymax;
    setYmaxIsSet(true);
    return this;
  }

  public void unsetYmax() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __YMAX_ISSET_ID);
  }

  /** Returns true if field ymax is set (has been assigned a value) and false otherwise */
  public boolean isSetYmax() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __YMAX_ISSET_ID);
  }

  public void setYmaxIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __YMAX_ISSET_ID, value);
  }

  public double getZmin() {
    return this.zmin;
  }

  public BoundingBox3f setZmin(double zmin) {
    this.zmin = zmin;
    setZminIsSet(true);
    return this;
  }

  public void unsetZmin() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __ZMIN_ISSET_ID);
  }

  /** Returns true if field zmin is set (has been assigned a value) and false otherwise */
  public boolean isSetZmin() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __ZMIN_ISSET_ID);
  }

  public void setZminIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __ZMIN_ISSET_ID, value);
  }

  public double getZmax() {
    return this.zmax;
  }

  public BoundingBox3f setZmax(double zmax) {
    this.zmax = zmax;
    setZmaxIsSet(true);
    return this;
  }

  public void unsetZmax() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __ZMAX_ISSET_ID);
  }

  /** Returns true if field zmax is set (has been assigned a value) and false otherwise */
  public boolean isSetZmax() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __ZMAX_ISSET_ID);
  }

  public void setZmaxIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __ZMAX_ISSET_ID, value);
  }

  public void setFieldValue(_Fields field, java.lang.Object value) {
    switch (field) {
    case XMIN:
      if (value == null) {
        unsetXmin();
      } else {
        setXmin((java.lang.Double)value);
      }
      break;

    case XMAX:
      if (value == null) {
        unsetXmax();
      } else {
        setXmax((java.lang.Double)value);
      }
      break;

    case YMIN:
      if (value == null) {
        unsetYmin();
      } else {
        setYmin((java.lang.Double)value);
      }
      break;

    case YMAX:
      if (value == null) {
        unsetYmax();
      } else {
        setYmax((java.lang.Double)value);
      }
      break;

    case ZMIN:
      if (value == null) {
        unsetZmin();
      } else {
        setZmin((java.lang.Double)value);
      }
      break;

    case ZMAX:
      if (value == null) {
        unsetZmax();
      } else {
        setZmax((java.lang.Double)value);
      }
      break;

    }
  }

  public java.lang.Object getFieldValue(_Fields field) {
    switch (field) {
    case XMIN:
      return getXmin();

    case XMAX:
      return getXmax();

    case YMIN:
      return getYmin();

    case YMAX:
      return getYmax();

    case ZMIN:
      return getZmin();

    case ZMAX:
      return getZmax();

    }
    throw new java.lang.IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new java.lang.IllegalArgumentException();
    }

    switch (field) {
    case XMIN:
      return isSetXmin();
    case XMAX:
      return isSetXmax();
    case YMIN:
      return isSetYmin();
    case YMAX:
      return isSetYmax();
    case ZMIN:
      return isSetZmin();
    case ZMAX:
      return isSetZmax();
    }
    throw new java.lang.IllegalStateException();
  }

  @Override
  public boolean equals(java.lang.Object that) {
    if (that == null)
      return false;
    if (that instanceof BoundingBox3f)
      return this.equals((BoundingBox3f)that);
    return false;
  }

  public boolean equals(BoundingBox3f that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_xmin = true;
    boolean that_present_xmin = true;
    if (this_present_xmin || that_present_xmin) {
      if (!(this_present_xmin && that_present_xmin))
        return false;
      if (this.xmin != that.xmin)
        return false;
    }

    boolean this_present_xmax = true;
    boolean that_present_xmax = true;
    if (this_present_xmax || that_present_xmax) {
      if (!(this_present_xmax && that_present_xmax))
        return false;
      if (this.xmax != that.xmax)
        return false;
    }

    boolean this_present_ymin = true;
    boolean that_present_ymin = true;
    if (this_present_ymin || that_present_ymin) {
      if (!(this_present_ymin && that_present_ymin))
        return false;
      if (this.ymin != that.ymin)
        return false;
    }

    boolean this_present_ymax = true;
    boolean that_present_ymax = true;
    if (this_present_ymax || that_present_ymax) {
      if (!(this_present_ymax && that_present_ymax))
        return false;
      if (this.ymax != that.ymax)
        return false;
    }

    boolean this_present_zmin = true;
    boolean that_present_zmin = true;
    if (this_present_zmin || that_present_zmin) {
      if (!(this_present_zmin && that_present_zmin))
        return false;
      if (this.zmin != that.zmin)
        return false;
    }

    boolean this_present_zmax = true;
    boolean that_present_zmax = true;
    if (this_present_zmax || that_present_zmax) {
      if (!(this_present_zmax && that_present_zmax))
        return false;
      if (this.zmax != that.zmax)
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    int hashCode = 1;

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(xmin);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(xmax);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(ymin);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(ymax);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(zmin);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(zmax);

    return hashCode;
  }

  @Override
  public int compareTo(BoundingBox3f other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = java.lang.Boolean.valueOf(isSetXmin()).compareTo(other.isSetXmin());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetXmin()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.xmin, other.xmin);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetXmax()).compareTo(other.isSetXmax());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetXmax()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.xmax, other.xmax);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetYmin()).compareTo(other.isSetYmin());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetYmin()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.ymin, other.ymin);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetYmax()).compareTo(other.isSetYmax());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetYmax()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.ymax, other.ymax);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetZmin()).compareTo(other.isSetZmin());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetZmin()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.zmin, other.zmin);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetZmax()).compareTo(other.isSetZmax());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetZmax()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.zmax, other.zmax);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    scheme(iprot).read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    scheme(oprot).write(oprot, this);
  }

  @Override
  public java.lang.String toString() {
    java.lang.StringBuilder sb = new java.lang.StringBuilder("BoundingBox3f(");
    boolean first = true;

    sb.append("xmin:");
    sb.append(this.xmin);
    first = false;
    if (!first) sb.append(", ");
    sb.append("xmax:");
    sb.append(this.xmax);
    first = false;
    if (!first) sb.append(", ");
    sb.append("ymin:");
    sb.append(this.ymin);
    first = false;
    if (!first) sb.append(", ");
    sb.append("ymax:");
    sb.append(this.ymax);
    first = false;
    if (!first) sb.append(", ");
    sb.append("zmin:");
    sb.append(this.zmin);
    first = false;
    if (!first) sb.append(", ");
    sb.append("zmax:");
    sb.append(this.zmax);
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // check for sub-struct validity
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, java.lang.ClassNotFoundException {
    try {
      // it doesn't seem like you should have to do this, but java serialization is wacky, and doesn't call the default constructor.
      __isset_bitfield = 0;
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class BoundingBox3fStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public BoundingBox3fStandardScheme getScheme() {
      return new BoundingBox3fStandardScheme();
    }
  }

  private static class BoundingBox3fStandardScheme extends org.apache.thrift.scheme.StandardScheme<BoundingBox3f> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, BoundingBox3f struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // XMIN
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.xmin = iprot.readDouble();
              struct.setXminIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // XMAX
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.xmax = iprot.readDouble();
              struct.setXmaxIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // YMIN
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.ymin = iprot.readDouble();
              struct.setYminIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // YMAX
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.ymax = iprot.readDouble();
              struct.setYmaxIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // ZMIN
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.zmin = iprot.readDouble();
              struct.setZminIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 6: // ZMAX
            if (schemeField.type == org.apache.thrift.protocol.TType.DOUBLE) {
              struct.zmax = iprot.readDouble();
              struct.setZmaxIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      // check for required fields of primitive type, which can't be checked in the validate method
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, BoundingBox3f struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(XMIN_FIELD_DESC);
      oprot.writeDouble(struct.xmin);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(XMAX_FIELD_DESC);
      oprot.writeDouble(struct.xmax);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(YMIN_FIELD_DESC);
      oprot.writeDouble(struct.ymin);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(YMAX_FIELD_DESC);
      oprot.writeDouble(struct.ymax);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(ZMIN_FIELD_DESC);
      oprot.writeDouble(struct.zmin);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(ZMAX_FIELD_DESC);
      oprot.writeDouble(struct.zmax);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class BoundingBox3fTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public BoundingBox3fTupleScheme getScheme() {
      return new BoundingBox3fTupleScheme();
    }
  }

  private static class BoundingBox3fTupleScheme extends org.apache.thrift.scheme.TupleScheme<BoundingBox3f> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, BoundingBox3f struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet optionals = new java.util.BitSet();
      if (struct.isSetXmin()) {
        optionals.set(0);
      }
      if (struct.isSetXmax()) {
        optionals.set(1);
      }
      if (struct.isSetYmin()) {
        optionals.set(2);
      }
      if (struct.isSetYmax()) {
        optionals.set(3);
      }
      if (struct.isSetZmin()) {
        optionals.set(4);
      }
      if (struct.isSetZmax()) {
        optionals.set(5);
      }
      oprot.writeBitSet(optionals, 6);
      if (struct.isSetXmin()) {
        oprot.writeDouble(struct.xmin);
      }
      if (struct.isSetXmax()) {
        oprot.writeDouble(struct.xmax);
      }
      if (struct.isSetYmin()) {
        oprot.writeDouble(struct.ymin);
      }
      if (struct.isSetYmax()) {
        oprot.writeDouble(struct.ymax);
      }
      if (struct.isSetZmin()) {
        oprot.writeDouble(struct.zmin);
      }
      if (struct.isSetZmax()) {
        oprot.writeDouble(struct.zmax);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, BoundingBox3f struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet incoming = iprot.readBitSet(6);
      if (incoming.get(0)) {
        struct.xmin = iprot.readDouble();
        struct.setXminIsSet(true);
      }
      if (incoming.get(1)) {
        struct.xmax = iprot.readDouble();
        struct.setXmaxIsSet(true);
      }
      if (incoming.get(2)) {
        struct.ymin = iprot.readDouble();
        struct.setYminIsSet(true);
      }
      if (incoming.get(3)) {
        struct.ymax = iprot.readDouble();
        struct.setYmaxIsSet(true);
      }
      if (incoming.get(4)) {
        struct.zmin = iprot.readDouble();
        struct.setZminIsSet(true);
      }
      if (incoming.get(5)) {
        struct.zmax = iprot.readDouble();
        struct.setZmaxIsSet(true);
      }
    }
  }

  private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
    return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
  }
}

