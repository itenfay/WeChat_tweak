//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderDataItem, WCFinderJumpInfo;

@interface MMFinderLiveSelectiveGoParams : NSObject
{
    unsigned int _goFlag;
    unsigned int _reportScenario;
    NSString *_finderUsername;
    WCFinderDataItem *_finderDataItem;
    unsigned long long _functionType;
    WCFinderJumpInfo *_jumpInfo;
    NSData *_paramsBuffer;
}

+ (id)paramsWithSelectGoResponse:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int reportScenario; // @synthesize reportScenario=_reportScenario;
@property(retain, nonatomic) NSData *paramsBuffer; // @synthesize paramsBuffer=_paramsBuffer;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned int goFlag; // @synthesize goFlag=_goFlag;

@end

