//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BSAffMsgExtraData : NSObject
{
    unsigned int _msgType;
    unsigned int _recNativeCardStyle;
    NSString *_recInfo;
    NSString *_extraData;
    NSString *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned int recNativeCardStyle; // @synthesize recNativeCardStyle=_recNativeCardStyle;
@property(retain, nonatomic) NSString *recInfo; // @synthesize recInfo=_recInfo;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;

@end

