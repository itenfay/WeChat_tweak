//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderMentionSerachFriendContact : NSObject
{
    WCFinderContact *_finderContact;
    NSString *_matchDesc;
    NSString *_highlightDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *highlightDesc; // @synthesize highlightDesc=_highlightDesc;
@property(retain, nonatomic) NSString *matchDesc; // @synthesize matchDesc=_matchDesc;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;

@end

