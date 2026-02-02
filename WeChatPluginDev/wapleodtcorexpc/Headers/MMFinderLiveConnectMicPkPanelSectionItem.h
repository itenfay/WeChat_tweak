//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser, NSString;

@interface MMFinderLiveConnectMicPkPanelSectionItem : NSObject
{
    unsigned long long _type;
    unsigned long long _teamNumber;
    unsigned long long _headerButtonType;
    MMFinderLiveConnectMicUser *_micUser;
    NSString *_headerTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
@property(nonatomic) unsigned long long headerButtonType; // @synthesize headerButtonType=_headerButtonType;
@property(nonatomic) unsigned long long teamNumber; // @synthesize teamNumber=_teamNumber;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

