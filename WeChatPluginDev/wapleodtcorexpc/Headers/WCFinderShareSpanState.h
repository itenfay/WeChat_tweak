//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderGeneralJumpErrMsgModel;

@interface WCFinderShareSpanState : NSObject
{
    WCFinderGeneralJumpErrMsgModel *_spanModel;
    NSString *_notFoundState;
    NSString *_spanModelStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *spanModelStr; // @synthesize spanModelStr=_spanModelStr;
@property(retain, nonatomic) NSString *notFoundState; // @synthesize notFoundState=_notFoundState;
@property(retain, nonatomic) WCFinderGeneralJumpErrMsgModel *spanModel; // @synthesize spanModel=_spanModel;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)valid;

@end

