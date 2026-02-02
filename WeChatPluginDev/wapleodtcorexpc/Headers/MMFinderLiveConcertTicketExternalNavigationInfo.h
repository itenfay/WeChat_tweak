//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSString, UIColor;

@interface MMFinderLiveConcertTicketExternalNavigationInfo : NSObject
{
    FinderJumpInfo *_jumpInfo;
    NSString *_backgroundImageUri;
    UIColor *_foregroundColor;
    NSString *_title;
    NSString *_iconUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUri; // @synthesize iconUri=_iconUri;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSString *backgroundImageUri; // @synthesize backgroundImageUri=_backgroundImageUri;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;

@end

