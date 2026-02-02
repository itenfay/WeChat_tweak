//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;
@protocol MMConfSDKVideoHWencDelegate;

@interface MMConfSDKVideoHWenc : NSObject
{
    int mStatus;
    int mCurEncIdx;
    int mEncFrmCount;
    int mEncErrCount;
    int mEncNoRtnCount;
    int mEncNoFrmCount;
    unsigned int muiHWEncExceptionMask;
    int mIreqFlag;
    _Bool mIsScreen;
    struct OpaqueVTCompressionSession *mEncodingSession;
    struct opaqueCMFormatDescription *mFormat;
    CDStruct_d2aef016 *mTimingInfo;
    struct _opaque_pthread_mutex_t mLock;
    struct BufNode *mQHead;
    struct BufNode *mQTail;
    int mCurCodec;
    int mFPS;
    int mBR;
    int mWidth;
    int mHeight;
    int mKeyFrmInterval;
    int mMinQP;
    NSString *mErrorStr;
    unsigned long long mFirstFrmTs;
    NSRecursiveLock *mVideoHWEncLock;
    id <MMConfSDKVideoHWencDelegate> _mHWEncDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMConfSDKVideoHWencDelegate> mHWEncDelegate; // @synthesize mHWEncDelegate=_mHWEncDelegate;
@property(retain, nonatomic) NSRecursiveLock *mVideoHWEncLock; // @synthesize mVideoHWEncLock;
@property unsigned long long mFirstFrmTs; // @synthesize mFirstFrmTs;
@property(nonatomic) int mMinQP; // @synthesize mMinQP;
@property(nonatomic) int mKeyFrmInterval; // @synthesize mKeyFrmInterval;
@property(nonatomic) int mHeight; // @synthesize mHeight;
@property(nonatomic) int mWidth; // @synthesize mWidth;
@property(nonatomic) int mBR; // @synthesize mBR;
@property(nonatomic) int mFPS; // @synthesize mFPS;
@property(nonatomic) int mCurCodec; // @synthesize mCurCodec;
@property(nonatomic) __weak NSString *mErrorStr; // @synthesize mErrorStr;
- (void)endEncode;
- (int)encode:(struct __CVBuffer *)arg1;
- (int)initEncode:(int)arg1 width:(int)arg2 height:(int)arg3 bitrate:(int)arg4 framerate:(int)arg5 iFrmGap:(int)arg6 encIdx:(int)arg7 isScreen:(_Bool)arg8;
- (void)GetAndSendHWStream:(struct opaqueCMSampleBuffer *)arg1 isKeyFrame:(_Bool)arg2;
- (_Bool)GetAndSendParaSet:(struct opaqueCMSampleBuffer *)arg1;
- (void)setHWEncMinQP:(int)arg1;
- (void)setHWEncKeyRequest:(int)arg1;
- (void)setHWEncFPS:(int)arg1;
- (void)setHWEncBR:(int)arg1;
- (id)init;
- (void)InitAllMembers;
- (void)ClearFrameQueue;

@end

