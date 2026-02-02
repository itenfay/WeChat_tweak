//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsDetailActionItem : NSObject
{
    long long _actionType;
    CDUnknownBlockType _getActionTitleBlock;
    CDUnknownBlockType _getActionTipsBlock;
    CDUnknownBlockType _displayBlock;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType displayBlock; // @synthesize displayBlock=_displayBlock;
@property(copy, nonatomic) CDUnknownBlockType getActionTipsBlock; // @synthesize getActionTipsBlock=_getActionTipsBlock;
@property(copy, nonatomic) CDUnknownBlockType getActionTitleBlock; // @synthesize getActionTitleBlock=_getActionTitleBlock;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void)didClickActionItem;
- (void)didDisplayActionItem;
- (id)getActionTips;
- (id)getActionTitle;
- (id)initWithActionType:(long long)arg1;

@end

