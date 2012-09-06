//
//  ContatoListController.h
//  TesteCoreData3
//
//  Created by Luiz Brandão on 21/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contatos.h"

@interface ContatoListController : UITableViewController
{
    NSManagedObjectContext *managedObjectContext;
    NSMutableArray *arrayLista;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSMutableArray *arrayLista;

-(void)listaRegistros;
-(void)addNovoRegistro:(id)sender;
@end
