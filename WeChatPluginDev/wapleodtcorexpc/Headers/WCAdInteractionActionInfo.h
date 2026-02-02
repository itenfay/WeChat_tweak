//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdInteractionActionInfo : NSObject
{
    NSString *_actionId;
    unsigned long long _actionType;
    NSString *_resourceId;
    unsigned long long _drawType;
    NSArray *_animations;
    unsigned long long _gestureType;
    unsigned long long _gestureOperateType;
    unsigned long long _activityType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long gestureOperateType; // @synthesize gestureOperateType=_gestureOperateType;
@property(nonatomic) unsigned long long gestureType; // @synthesize gestureType=_gestureType;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(nonatomic) unsigned long long drawType; // @synthesize drawType=_drawType;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

