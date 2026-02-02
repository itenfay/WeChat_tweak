//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, UIScrollView, ZZFLEXAngelIndexPathChainModel, ZZFLEXAngelViewBatchEditChainModel, ZZFLEXAngelViewEditChainModel;

@protocol ZZFLEXAngelAPIProtocol <NSObject>
@property(readonly, copy, nonatomic) ZZFLEXAngelIndexPathChainModel *indexPath;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *dataModelArray;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *dataModel;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *hasCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *updateCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *updateCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *deleteCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *deleteCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSeperatorCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType setHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType hasSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType deleteSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType sectionForTag;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType isEmpty;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType update;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType clear;
@property(readonly, copy, nonatomic) CDUnknownBlockType reload;
@property(readonly, nonatomic) __weak UIScrollView *hostView;
@property(readonly, nonatomic) NSMutableArray *data;
- (void)reloadView;
@end

