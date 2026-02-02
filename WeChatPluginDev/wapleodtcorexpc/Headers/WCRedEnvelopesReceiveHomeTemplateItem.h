//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesReceiveHomeTemplateItem : NSObject
{
    _Bool _isTempSkin;
    unsigned int _skinLocalId;
    int _pagType;
    NSString *_corpName;
    NSString *_skinUrl;
    NSString *_skinImageMd5;
    NSString *_skinWidgetUrl;
    NSString *_skinWidgetMd5;
    NSString *_skinPagUrl;
    NSString *_skinPagMd5;
    NSString *_atmospherePagUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *atmospherePagUrl; // @synthesize atmospherePagUrl=_atmospherePagUrl;
@property(nonatomic) int pagType; // @synthesize pagType=_pagType;
@property(retain, nonatomic) NSString *skinPagMd5; // @synthesize skinPagMd5=_skinPagMd5;
@property(retain, nonatomic) NSString *skinPagUrl; // @synthesize skinPagUrl=_skinPagUrl;
@property(retain, nonatomic) NSString *skinWidgetMd5; // @synthesize skinWidgetMd5=_skinWidgetMd5;
@property(retain, nonatomic) NSString *skinWidgetUrl; // @synthesize skinWidgetUrl=_skinWidgetUrl;
@property(nonatomic) _Bool isTempSkin; // @synthesize isTempSkin=_isTempSkin;
@property(retain, nonatomic) NSString *skinImageMd5; // @synthesize skinImageMd5=_skinImageMd5;
@property(nonatomic) unsigned int skinLocalId; // @synthesize skinLocalId=_skinLocalId;
@property(retain, nonatomic) NSString *skinUrl; // @synthesize skinUrl=_skinUrl;
@property(retain, nonatomic) NSString *corpName; // @synthesize corpName=_corpName;

@end

