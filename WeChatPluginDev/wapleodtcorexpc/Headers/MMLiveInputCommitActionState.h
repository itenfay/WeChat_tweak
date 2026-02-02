//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWindowProductInfo, MMFinderLiveFloatMsg;

@interface MMLiveInputCommitActionState : NSObject
{
    _Bool _isCurrentForwardToFloatBarrage;
    _Bool _isCurrentForwardToProductQuestion;
    MMFinderLiveFloatMsg *_floatMsgToUse;
    FinderWindowProductInfo *_questionProductInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderWindowProductInfo *questionProductInfo; // @synthesize questionProductInfo=_questionProductInfo;
@property(nonatomic) _Bool isCurrentForwardToProductQuestion; // @synthesize isCurrentForwardToProductQuestion=_isCurrentForwardToProductQuestion;
@property(retain, nonatomic) MMFinderLiveFloatMsg *floatMsgToUse; // @synthesize floatMsgToUse=_floatMsgToUse;
@property(nonatomic) _Bool isCurrentForwardToFloatBarrage; // @synthesize isCurrentForwardToFloatBarrage=_isCurrentForwardToFloatBarrage;

@end

