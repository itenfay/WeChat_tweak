//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCImageTrack : NSObject
{
    SharedPtr_18dc3c11 _backingImageTrack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_18dc3c11 backingImageTrack; // @synthesize backingImageTrack=_backingImageTrack;
@property(readonly, nonatomic) unsigned long long orientation;
@property(readonly, nonatomic) unsigned long long aspectRatio;
@property(readonly, nonatomic) NSString *pixelFormatName;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) NSString *codecIDName;
- (id)initWithFilePath:(id)arg1;
- (id)initWithBackingImageTrack:(const void *)arg1;

@end

