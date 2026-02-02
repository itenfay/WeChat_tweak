//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface COpenIMCustomDetail : NSObject
{
    unsigned int _resSubType;
    NSString *_icon;
    NSString *_desc;
    long long _descType;
    long long _action;
    NSDictionary *_action_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *action_param; // @synthesize action_param=_action_param;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long descType; // @synthesize descType=_descType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
- (id)getDesc:(id)arg1;

@end

