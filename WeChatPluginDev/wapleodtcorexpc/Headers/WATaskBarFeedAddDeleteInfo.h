//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WATaskBarFeedAddDeleteInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _actionType;
    unsigned long long _actionChannel;
    unsigned long long _contentType;
    NSString *_contentId;
    unsigned long long _liveDuration;
    unsigned long long _page;
    unsigned long long _indexFrom;
    unsigned long long _indexTo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long indexTo; // @synthesize indexTo=_indexTo;
@property(nonatomic) unsigned long long indexFrom; // @synthesize indexFrom=_indexFrom;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long liveDuration; // @synthesize liveDuration=_liveDuration;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long actionChannel; // @synthesize actionChannel=_actionChannel;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

