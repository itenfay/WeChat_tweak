//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CommentContentInfo;

@interface FinderUniCommentMediaItem : NSObject
{
    int _type;
    CommentContentInfo *_contentInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommentContentInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(nonatomic) int type; // @synthesize type=_type;

@end

