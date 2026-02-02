//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCommentDataItem, MMLiveTaskId, NSString;

@interface MMLiveCommentTableViewCellFrame : NSObject
{
    _Bool _isLastLine;
    _Bool _isFirstLine;
    unsigned int _msgType;
    double _cellHeight;
    double _currCellHeight;
    MMLiveCommentDataItem *_comment;
    MMLiveTaskId *_taskId;
}

+ (double)standardLiveCommentCellHeight:(unsigned long long)arg1;
+ (double)liveCommentCellToCellMargin:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveCommentDataItem *comment; // @synthesize comment=_comment;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) _Bool isFirstLine; // @synthesize isFirstLine=_isFirstLine;
@property(nonatomic) _Bool isLastLine; // @synthesize isLastLine=_isLastLine;
@property(readonly, nonatomic) double currCellHeight; // @synthesize currCellHeight=_currCellHeight;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void)resetCellFrame;
- (void)calculateWithCommentInfo:(id)arg1 isFirstLine:(_Bool)arg2;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(_Bool)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

