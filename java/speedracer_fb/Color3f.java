// automatically generated by the FlatBuffers compiler, do not modify

package speedracer_fb;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class Color3f extends Struct {
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public Color3f __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public float r() { return bb.getFloat(bb_pos + 0); }
  public float g() { return bb.getFloat(bb_pos + 4); }
  public float b() { return bb.getFloat(bb_pos + 8); }

  public static int createColor3f(FlatBufferBuilder builder, float r, float g, float b) {
    builder.prep(4, 12);
    builder.putFloat(b);
    builder.putFloat(g);
    builder.putFloat(r);
    return builder.offset();
  }
}

