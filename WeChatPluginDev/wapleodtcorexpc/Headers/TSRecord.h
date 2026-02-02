//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TSTrackedItem;
@protocol TSFinalTrackedItem;

@interface TSRecord : NSObject
{
    _Bool _reported;
    long long _scene;
    long long _action;
    double _timestamp;
    TSTrackedItem<TSFinalTrackedItem> *_item;
    NSMutableDictionary *_externals;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *externals; // @synthesize externals=_externals;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(retain, nonatomic) TSTrackedItem<TSFinalTrackedItem> *item; // @synthesize item=_item;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTrackedItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3 timestamp:(double)arg4;
@property(retain, nonatomic) NSDictionary *marks;
@property(retain, nonatomic) NSString *userAge;
@property(retain, nonatomic) NSString *userSex;
@property(retain, nonatomic) NSString *userWeight;
@property(retain, nonatomic) NSString *userHeight;
@property(retain, nonatomic) NSArray *splitingPoints;
@property(retain, nonatomic) NSString *command;
@property(retain, nonatomic) NSString *attacker;
@property(nonatomic) unsigned long long ownerReport;
@property(nonatomic) unsigned long long ownerPredictionResult;
@property(nonatomic) unsigned long long ownerQueryType;
- (void)setIsGesturePasscode:(_Bool)arg1;
- (_Bool)isGesturePasscode;
@property(nonatomic) unsigned long long passcodeType;
@property(retain, nonatomic) NSString *passcodeContext;
@property(nonatomic) long long positionCode;
@property(nonatomic) unsigned long long segmentIdentifier;
@property(nonatomic) unsigned long long interfaceType;
@property(retain, nonatomic) NSString *userIdentifier;

@end

