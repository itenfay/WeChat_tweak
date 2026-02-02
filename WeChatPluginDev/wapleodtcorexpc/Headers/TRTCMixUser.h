//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCMixUser : NSObject
{
    _Bool _pureAudio;
    int _zOrder;
    int _renderMode;
    NSString *_userId;
    NSString *_roomID;
    long long _streamType;
    unsigned long long _inputType;
    NSString *_image;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) int renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) unsigned long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) _Bool pureAudio; // @synthesize pureAudio=_pureAudio;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)init;
- (int)convertInputType:(unsigned long long)arg1;
- (struct MixedUserConfig)convertToCppParams;

@end

