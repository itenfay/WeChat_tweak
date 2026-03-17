//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTCanvasItemDataParser : NSObject
{
}

+ (id)getCanvasIdFromRecCardWrapper:(id)arg1;
+ (id)parseDataFromRecoFlowMsg:(id)arg1;
+ (id)parseRecCardWrapper:(id)arg1;
+ (id)parseRecommendDataFromMsg:(id)arg1;
+ (id)parseAdDataFromJsonStr:(id)arg1;
+ (id)parseDataFromMsg:(id)arg1;
+ (id)canvasIdWithBizType:(unsigned int)arg1 bizId:(id)arg2;

@end

