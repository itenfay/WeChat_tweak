//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderSuggestion : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *highlightSuggest; // @dynamic highlightSuggest;
@property(nonatomic) unsigned long long hot; // @dynamic hot;
@property(retain, nonatomic) NSString *suggest; // @dynamic suggest;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

