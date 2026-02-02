//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface WCFinderBgmListOptionalParams : NSObject
{
    NSData *_classifyResultData;
    NSArray *_miaojianMusicIds;
    NSString *_miaojianTemplateId;
    unsigned long long _finderEnterScene;
    NSMutableArray *_assertItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *assertItems; // @synthesize assertItems=_assertItems;
@property(nonatomic) unsigned long long finderEnterScene; // @synthesize finderEnterScene=_finderEnterScene;
@property(copy, nonatomic) NSString *miaojianTemplateId; // @synthesize miaojianTemplateId=_miaojianTemplateId;
@property(retain, nonatomic) NSArray *miaojianMusicIds; // @synthesize miaojianMusicIds=_miaojianMusicIds;
@property(copy, nonatomic) NSData *classifyResultData; // @synthesize classifyResultData=_classifyResultData;

@end

