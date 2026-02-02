//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveSearchMoreGamesResponse_Weapp, NSString;

@interface MMFinderLiveGameSearchUserInfo
{
    _Bool _isAdded;
    NSString *_shortAppname;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shortAppname; // @synthesize shortAppname=_shortAppname;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
- (void)copyFromPBItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBItem:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FinderLiveSearchMoreGamesResponse_Weapp *weApp;

@end

