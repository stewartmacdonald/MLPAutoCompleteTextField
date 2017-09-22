//
//  AutoCompleteSuggestion.h
//  Sightings 2
//
//  Created by Stewart Macdonald on 19/9/17.
//  Copyright © 2017 Ug Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MLPAutoCompletionObject.h"

@interface AutoCompleteSuggestion : NSObject <MLPAutoCompletionObject> {
	
}

@property (nonatomic, strong) NSString *autocompleteString;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *subtitle;

@end
