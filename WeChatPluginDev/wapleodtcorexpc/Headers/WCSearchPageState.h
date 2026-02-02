//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCSearchUIConfig, WebSearchContext;

@interface WCSearchPageState : NSObject
{
    _Bool _isEditting;
    _Bool _isFromVertical;
    unsigned long long _contentType;
    WebSearchContext *_data;
    WCSearchUIConfig *_uiConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromVertical; // @synthesize isFromVertical=_isFromVertical;
@property(retain, nonatomic) WCSearchUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) WebSearchContext *data; // @synthesize data=_data;
@property(nonatomic) _Bool isEditting; // @synthesize isEditting=_isEditting;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (_Bool)needEditingAtBegining;
- (_Bool)initiativeImageSearchEnabled;
- (_Bool)isShowCancelButtonByExpt;
- (_Bool)isShowBackButton;
- (_Bool)isShowCancelButton;
- (_Bool)isBackButtonDirectExit;
- (_Bool)isVertSearh;
- (_Bool)isFromDiscoverSearch;
- (_Bool)isImageSearch;
- (_Bool)isSubSearch;
- (_Bool)isBrandVertSearch;
- (void)refreshData;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;

@end

