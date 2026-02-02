//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCommentTableViewCellFrame;

@interface MMLiveCommentTableViewTopItem : NSObject
{
    _Bool _deleteOriginCell;
    MMFinderLiveCommentTableViewCellFrame *_cellFrame;
    double _displayDuration;
    MMFinderLiveCommentTableViewCellFrame *_originalCellFrame;
    long long _originalCommentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long originalCommentIndex; // @synthesize originalCommentIndex=_originalCommentIndex;
@property(retain, nonatomic) MMFinderLiveCommentTableViewCellFrame *originalCellFrame; // @synthesize originalCellFrame=_originalCellFrame;
@property(nonatomic) _Bool deleteOriginCell; // @synthesize deleteOriginCell=_deleteOriginCell;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(retain, nonatomic) MMFinderLiveCommentTableViewCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;

@end

