//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePromoteInfoListWecomContact;

@interface MMFinderLiveWeComContactAnchorPromoteInfo : NSObject
{
    FinderLivePromoteInfoListWecomContact *_wecomContact;
}

+ (id)createWeComContactAnchorPromoteInfoFrom:(id)arg1;
@property(retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact; // @synthesize wecomContact=_wecomContact;
- (id)promoteKey;

@end

