//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebCanvasItemData
{
    NSString *_canvasId;
    NSString *_bizType;
    NSString *_jsonData;
    NSString *_accessibilityLabel;
    NSString *_bizDomain;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bizDomain; // @synthesize bizDomain=_bizDomain;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *jsonData; // @synthesize jsonData=_jsonData;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (id)description;

@end

