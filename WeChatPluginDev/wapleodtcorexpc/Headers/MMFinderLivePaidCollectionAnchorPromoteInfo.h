//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderPaidCollectionInfo;

@interface MMFinderLivePaidCollectionAnchorPromoteInfo : NSObject
{
    FinderPaidCollectionInfo *_paidCollectionInfo;
}

+ (id)createPaidCollectionInfoFrom:(id)arg1;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo; // @synthesize paidCollectionInfo=_paidCollectionInfo;
- (_Bool)shouldSkipReportOnPromoteManagerPanelStart;
- (id)promoteKey;

@end

