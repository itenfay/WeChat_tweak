//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderManagePOIViewModelDelegate;

@interface WCFinderManagePOIViewModel : NSObject
{
    _Bool _auditingContinueFlag;
    _Bool _bindingContinueFlag;
    id <WCFinderManagePOIViewModelDelegate> _delegate;
    NSMutableArray *_auditingPOIInfoList;
    NSMutableArray *_bindingPOIInfoList;
    NSString *_finderUsername;
    NSData *_auditingLastBuffer;
    NSData *_bindingLastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bindingLastBuffer; // @synthesize bindingLastBuffer=_bindingLastBuffer;
@property(retain, nonatomic) NSData *auditingLastBuffer; // @synthesize auditingLastBuffer=_auditingLastBuffer;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool bindingContinueFlag; // @synthesize bindingContinueFlag=_bindingContinueFlag;
@property(nonatomic) _Bool auditingContinueFlag; // @synthesize auditingContinueFlag=_auditingContinueFlag;
@property(retain, nonatomic) NSMutableArray *bindingPOIInfoList; // @synthesize bindingPOIInfoList=_bindingPOIInfoList;
@property(retain, nonatomic) NSMutableArray *auditingPOIInfoList; // @synthesize auditingPOIInfoList=_auditingPOIInfoList;
@property(nonatomic) __weak id <WCFinderManagePOIViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchBindingDataWithLastBuffer:(id)arg1;
- (void)fetchNextBindingPageData;
- (void)fetchFirstBindingPageData;
- (void)fetchAuditingDataWithLastBuffer:(id)arg1;
- (void)fetchNextAuditingPageData;
- (void)fetchFirstAuditingPageData;
- (void)unbindPOIWithId:(id)arg1;
- (void)appendAuditingPOI:(id)arg1;
- (void)bindPOIWithIds:(id)arg1;
- (void)fetchRelativePOIListWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)poiInfoForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithFinderUsername:(id)arg1;

@end

