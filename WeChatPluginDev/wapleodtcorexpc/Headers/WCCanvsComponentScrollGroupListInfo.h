//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCCanvsComponentScrollGroupListInfo
{
    int _pageCtrType;
    int _isFullScreen;
    int _autoCarousel;
    int _enterViewIndex;
    NSArray *_componentGroupList;
}

- (void).cxx_destruct;
@property(nonatomic) int enterViewIndex; // @synthesize enterViewIndex=_enterViewIndex;
@property(nonatomic) int autoCarousel; // @synthesize autoCarousel=_autoCarousel;
@property(nonatomic) int isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) int pageCtrType; // @synthesize pageCtrType=_pageCtrType;
@property(retain, nonatomic) NSArray *componentGroupList; // @synthesize componentGroupList=_componentGroupList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

