//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LensIcon, LensPackage, NSString, PersonalDesigner;

@interface LensInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PersonalDesigner *designer; // @dynamic designer;
@property(retain, nonatomic) LensIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) LensPackage *package; // @dynamic package;

@end

