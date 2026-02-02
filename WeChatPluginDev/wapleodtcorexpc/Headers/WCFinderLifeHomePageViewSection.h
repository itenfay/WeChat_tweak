//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderStreamDivider, NSMutableArray;

@interface WCFinderLifeHomePageViewSection : NSObject
{
    FinderStreamDivider *_divider;
    NSMutableArray *_contentVMS;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(retain, nonatomic) FinderStreamDivider *divider; // @synthesize divider=_divider;
- (id)init;

@end

