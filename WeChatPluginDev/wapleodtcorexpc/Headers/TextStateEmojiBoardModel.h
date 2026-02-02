//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TextStatePublishIconGroup, TextStatePublishIconList, TextStateRecentIconList;
@protocol TextStateEmojiBoardModelDelegate;

@interface TextStateEmojiBoardModel : NSObject
{
    id <TextStateEmojiBoardModelDelegate> _delegate;
    TextStatePublishIconList *_publishIconList;
    TextStatePublishIconGroup *_recentIconGroup;
    TextStateRecentIconList *_recentIconList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateRecentIconList *recentIconList; // @synthesize recentIconList=_recentIconList;
@property(retain, nonatomic) TextStatePublishIconGroup *recentIconGroup; // @synthesize recentIconGroup=_recentIconGroup;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList; // @synthesize publishIconList=_publishIconList;
@property(nonatomic) __weak id <TextStateEmojiBoardModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)mmkvKey;
@property(readonly, nonatomic) TextStatePublishIconList *iconList;
- (void)appendRecentUsedIcon:(id)arg1;
- (id)initWithPublishIconList:(id)arg1;

@end

