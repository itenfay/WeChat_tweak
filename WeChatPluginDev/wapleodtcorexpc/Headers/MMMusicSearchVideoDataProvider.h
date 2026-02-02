//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol MMMusicSearchVideoDataProviderDelegate;

@interface MMMusicSearchVideoDataProvider : NSObject
{
    NSMutableArray *_arrData;
    NSString *m_lastNsInput;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    id <MMMusicSearchVideoDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicSearchVideoDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyOnDataChanged:(_Bool)arg1 isClearAll:(_Bool)arg2;
- (void)loadData:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)searchWithInputNextPage;
- (void)searchWithInput:(id)arg1;
- (void)clearAllData;
- (id)getDataById:(id)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)cellDataAtIndex:(unsigned long long)arg1;
- (long long)numberOfItemsInSection;
- (id)init;

@end

