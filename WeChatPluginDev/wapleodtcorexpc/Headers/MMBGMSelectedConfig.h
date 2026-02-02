//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBGMSelectedOptionalConfig;

@interface MMBGMSelectedConfig : NSObject
{
    int _musicBussId;
    MMBGMSelectedOptionalConfig *_optionalConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedOptionalConfig *optionalConfig; // @synthesize optionalConfig=_optionalConfig;
@property(nonatomic) int musicBussId; // @synthesize musicBussId=_musicBussId;
- (id)genFixedDataReportDict;

@end

