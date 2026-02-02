//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCVideoTrack : NSObject
{
    SharedPtr_43668d6b _backingVideoTrack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_43668d6b backingVideoTrack; // @synthesize backingVideoTrack=_backingVideoTrack;
@property(readonly, nonatomic) long long averageBitrate;
@property(readonly, nonatomic) unsigned long long imagePackingType;
@property(readonly, nonatomic) NSString *frameRateName;
@property(readonly, nonatomic) float frameRate;
@property(readonly, nonatomic) unsigned long long orientation;
@property(readonly, nonatomic) unsigned long long aspectRatio;
@property(readonly, nonatomic) NSString *colorPrimariesName;
@property(readonly, nonatomic) unsigned long long colorPrimaries;
@property(readonly, nonatomic) NSString *pixelColorTypeName;
@property(readonly, nonatomic) NSString *pixelFormatNama;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) NSString *codecLevel;
@property(readonly, nonatomic) NSString *codecProfile;
@property(readonly, nonatomic) NSString *codecID;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingVideoTrack:(const void *)arg1;

@end

