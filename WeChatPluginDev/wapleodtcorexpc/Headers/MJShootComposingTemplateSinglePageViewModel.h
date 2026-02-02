//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, UBArraySignal, WCGetCameraTemplateListParams;
@protocol MJShootComposingTemplateSinglePageViewModelDelegate, MJShootComposingTemplateSinglePageViewModelTabDataSource;

@interface MJShootComposingTemplateSinglePageViewModel : NSObject
{
    _Bool _isFetching;
    unsigned int _tabType;
    unsigned long long _templateScene;
    NSString *_selectedTemplateID;
    unsigned long long _tabID;
    NSMutableArray *_templateItems;
    id <MJShootComposingTemplateSinglePageViewModelDelegate> _delegate;
    id <MJShootComposingTemplateSinglePageViewModelTabDataSource> _tabDataSource;
    UBArraySignal *_defaultTabDidUpdateTemplateSignal;
    NSString *_username;
    WCGetCameraTemplateListParams *_optionalParams;
    NSData *_lastPageBuf;
    long long _lastContinueFlag;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastContinueFlag; // @synthesize lastContinueFlag=_lastContinueFlag;
@property(retain, nonatomic) NSData *lastPageBuf; // @synthesize lastPageBuf=_lastPageBuf;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) WCGetCameraTemplateListParams *optionalParams; // @synthesize optionalParams=_optionalParams;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) UBArraySignal *defaultTabDidUpdateTemplateSignal; // @synthesize defaultTabDidUpdateTemplateSignal=_defaultTabDidUpdateTemplateSignal;
@property(nonatomic) __weak id <MJShootComposingTemplateSinglePageViewModelTabDataSource> tabDataSource; // @synthesize tabDataSource=_tabDataSource;
@property(nonatomic) __weak id <MJShootComposingTemplateSinglePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *templateItems; // @synthesize templateItems=_templateItems;
@property(nonatomic) unsigned int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long tabID; // @synthesize tabID=_tabID;
@property(retain, nonatomic) NSString *selectedTemplateID; // @synthesize selectedTemplateID=_selectedTemplateID;
@property(nonatomic) unsigned long long templateScene; // @synthesize templateScene=_templateScene;
- (_Bool)containsTemplateWithID:(id)arg1;
- (_Bool)shouldFetchMoreTemplate;
- (void)loadMoreTemplateIfNeeded;
- (void)fetchFavTemplateItems;
- (void)fetchRecTemplateItems;
- (void)fetchTemplateItems;
- (id)init;

@end

