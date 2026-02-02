//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJMovieTemplateInfo : NSObject
{
    NSString *_templateID;
    NSString *_musicID;
    NSString *_channelEventName;
    NSString *_finderNickName;
    unsigned long long _minimumiOSSDKVersion;
    unsigned long long _minimumAndroidSDKVersion;
    unsigned long long _templateType;
}

+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 OMJMusicInfo:(id)arg2 templateType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long minimumAndroidSDKVersion; // @synthesize minimumAndroidSDKVersion=_minimumAndroidSDKVersion;
@property(nonatomic) unsigned long long minimumiOSSDKVersion; // @synthesize minimumiOSSDKVersion=_minimumiOSSDKVersion;
@property(copy, nonatomic) NSString *finderNickName; // @synthesize finderNickName=_finderNickName;
@property(copy, nonatomic) NSString *channelEventName; // @synthesize channelEventName=_channelEventName;
@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;

@end

