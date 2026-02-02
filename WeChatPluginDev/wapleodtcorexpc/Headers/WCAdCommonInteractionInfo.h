//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdCommonInteractionInfo : NSObject
{
    NSString *_actionTip;
    long long _actionType;
    double _actionPosition;
    double _actionDelay;
    double _triggerGForce;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double triggerGForce; // @synthesize triggerGForce=_triggerGForce;
@property(nonatomic) double actionDelay; // @synthesize actionDelay=_actionDelay;
@property(nonatomic) double actionPosition; // @synthesize actionPosition=_actionPosition;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *actionTip; // @synthesize actionTip=_actionTip;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

