//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, StatusExtInfo;

@interface TextStateFullModel : NSObject
{
    NSString *_textStateId;
    StatusExtInfo *_textState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StatusExtInfo *textState; // @synthesize textState=_textState;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;

@end

