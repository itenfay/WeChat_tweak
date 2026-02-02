//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdHalfRandomCardGetCardIdResultModel
{
    int _result;
    NSString *_canvasId;
    NSString *_pageId;
    NSString *_cardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;

@end

