//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateMsgRecvStateItem : NSObject
{
    NSString *_templateId;
    unsigned int _recvState;
    NSString *_templateTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *templateTitle; // @synthesize templateTitle=_templateTitle;
@property(nonatomic) unsigned int recvState; // @synthesize recvState=_recvState;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;

@end

