//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderSearchSuggestion : NSObject
{
    NSString *_tips;
    NSString *_highLightTips;
    unsigned long long _dataType;
    NSMutableArray *_tipsHighLightkeywords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tipsHighLightkeywords; // @synthesize tipsHighLightkeywords=_tipsHighLightkeywords;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *highLightTips; // @synthesize highLightTips=_highLightTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
- (void)processHighLightkeywords;
- (id)initClearTypeSuggestion;
- (id)initWithHistoryTips:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithTips:(id)arg1 highLightTips:(id)arg2 dataType:(unsigned long long)arg3;

@end

