//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayGPSolitaireItem : NSObject
{
    _Bool _bIsContentCut;
    unsigned int _contentCreateTime;
    NSString *_username;
    NSString *_content;
    long long _newLineCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long newLineCount; // @synthesize newLineCount=_newLineCount;
@property(nonatomic) _Bool bIsContentCut; // @synthesize bIsContentCut=_bIsContentCut;
@property(nonatomic) unsigned int contentCreateTime; // @synthesize contentCreateTime=_contentCreateTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

