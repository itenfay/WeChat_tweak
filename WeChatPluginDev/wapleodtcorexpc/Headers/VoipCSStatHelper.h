//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipCSStatHelper : NSObject
{
}

+ (id)GenVoipCSEngineLog:(struct VoipCSEngineReport_t *)arg1;
+ (id)GenVoipCSChannelLog:(struct VoipCSChannelReport_t *)arg1;
+ (id)GenClientLog:(struct VoipCSClientReport_t *)arg1;
+ (id)Gen3rdLog:(struct VoipCS3rdReport_t *)arg1;

@end

