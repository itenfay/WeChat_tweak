//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPCommentMsg, NSMutableArray;

@interface MPCommentSectionData : NSObject
{
    MPCommentMsg *_commentMsg;
    NSMutableArray *_cellViewModelArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cellViewModelArray; // @synthesize cellViewModelArray=_cellViewModelArray;
@property(retain, nonatomic) MPCommentMsg *commentMsg; // @synthesize commentMsg=_commentMsg;
- (void)initCellViewModelArray:(_Bool)arg1;
- (id)initWithMPCommentMsg:(id)arg1 isMutiReplyEnable:(_Bool)arg2;

@end

