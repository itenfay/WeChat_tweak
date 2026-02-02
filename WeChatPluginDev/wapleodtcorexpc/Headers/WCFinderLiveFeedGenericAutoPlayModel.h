//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface WCFinderLiveFeedGenericAutoPlayModel : NSObject
{
    NSIndexPath *_first;
    NSIndexPath *_last;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *last; // @synthesize last=_last;
@property(retain, nonatomic) NSIndexPath *first; // @synthesize first=_first;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeIndexPath:(id)arg1;
- (_Bool)containIndexPath:(id)arg1;
- (_Bool)isSinglePlay;
- (_Bool)isEmpty;

@end

