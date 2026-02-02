//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Announcement, BaseResponse, NSMutableArray, NSString;

@interface FinderGetLiveIncomePageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Announcement *announcement; // @dynamic announcement;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isCocertActivate; // @dynamic isCocertActivate;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;
@property(nonatomic) _Bool useStudioNewStyle; // @dynamic useStudioNewStyle;

@end

