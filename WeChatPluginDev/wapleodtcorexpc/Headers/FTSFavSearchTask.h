//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSFavDB, NSMutableArray, NSString;
@protocol FTSFavSearchTaskDelegate;

@interface FTSFavSearchTask : NSObject
{
    NSMutableArray *m_resultArr;
    NSMutableArray *m_dbResultArr;
    _Bool m_isCancel;
    _Bool m_isRuning;
    FTSFavDB *m_favFTSDB;
    NSMutableArray *m_arrLastQueryTerm;
    _Bool _hasSearchDone;
    NSString *_taskKey;
    id <FTSFavSearchTaskDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_lastQueryText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) __weak id <FTSFavSearchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(readonly, nonatomic) NSMutableArray *arrLastQueryTerm; // @synthesize arrLastQueryTerm=m_arrLastQueryTerm;
- (id)getAllResultItem;
- (id)getItemAtIndex:(unsigned int)arg1;
- (unsigned int)getTotalResultCount;
- (unsigned int)getCurrentResultCount;
- (void)cancelSearch;
- (id)loadMoreSearchContentFromDBResult:(int)arg1 deletedItemCount:(int *)arg2;
- (void)loadMoreSearchContent;
- (void)syncFTSSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)asyncFTSSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)dealloc;
- (id)initWithDB:(id)arg1;

@end

