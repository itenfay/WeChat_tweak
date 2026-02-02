//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveBottomButtonBackgroundColorConfig : NSObject
{
    NSString *_commonBGColorHex;
    NSString *_bottomButtonBGColorHexLandscapeLivePortraitMode;
    NSString *_bottomButtonBGColorHexInConnectMic;
}

+ (id)configFromButtonInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomButtonBGColorHexInConnectMic; // @synthesize bottomButtonBGColorHexInConnectMic=_bottomButtonBGColorHexInConnectMic;
@property(retain, nonatomic) NSString *bottomButtonBGColorHexLandscapeLivePortraitMode; // @synthesize bottomButtonBGColorHexLandscapeLivePortraitMode=_bottomButtonBGColorHexLandscapeLivePortraitMode;
@property(retain, nonatomic) NSString *commonBGColorHex; // @synthesize commonBGColorHex=_commonBGColorHex;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

